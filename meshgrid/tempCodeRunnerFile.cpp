Arange arangeX(x_min, x_max, window_size);
        std::vector<double> grid_center_x = arangeX.arange();
        int rows = grid_center_x.size();

        Arange arangeY(y_min, y_max, window_size);
        std::vector<double> grid_center_y = arangeY.arange();
        int columns = grid_center_y.size();

        std::vector<std::vector<std::pair<double, double>>> grid(rows, std::vector<std::pair<double, double>>(columns));
        