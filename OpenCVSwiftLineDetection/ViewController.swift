//
//  ViewController.swift
//  OpenCVSwiftLineDetection
//
//  Created by Pieter Meiresone on 09/10/2020.
//  Copyright © 2020 Pieter Meiresone. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    @IBOutlet var scrollView: UIScrollView!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        
        self.detectLines()
    }

    func detectLines() {
        DispatchQueue.global().async {
            let image = UIImage(named: "dash2.jpg")
            
            let result = CVWrapper.processImage(withOpenCV: image!)
            
            DispatchQueue.main.async {
                let imageView:UIImageView = UIImageView.init(image: result)
                self.scrollView.addSubview(imageView)
                self.scrollView.backgroundColor = UIColor.black
                self.scrollView.contentSize = imageView.bounds.size
            }
        }
    }
}

